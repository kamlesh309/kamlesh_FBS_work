package main;

import java.util.Scanner;

import model.Device;
import model.Home;
import model.Room;
import devices.*;

public class HomeDeviceAutomationApp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Home home = new Home();

        Room livingRoom = new Room("Living Room");
        livingRoom.addDevice(new TV("Samsung TV"));
        livingRoom.addDevice(new Light("Main Light"));

        Room kitchen = new Room("Kitchen");
        kitchen.addDevice(new Fridge("Fridge"));
        kitchen.addDevice(new Light("Kitchen Light"));

        Room bedroom = new Room("Bedroom");
        bedroom.addDevice(new AC("Hitachi AC"));
        bedroom.addDevice(new Light("Bedside Lamp"));

        home.addRoom(livingRoom);
        home.addRoom(kitchen);
        home.addRoom(bedroom);

        boolean exit = false;
        while (!exit) {
            System.out.println("\n--- Home Device Automation System ---");
            System.out.println("1. List All Rooms and Devices");
            System.out.println("2. Add Room");
            System.out.println("3. Add Device to Room");
            System.out.println("4. Turn On a Device");
            System.out.println("5. Turn Off a Device");
            System.out.println("6. Show Device Status by Room");
            System.out.println("7. Exit");
            System.out.print("Enter your choice: ");

            int choice = -1;
            if (sc.hasNextInt()) {
                choice = sc.nextInt();
            } else {
                sc.nextLine(); 
                System.out.println("Please enter a valid number.");
                continue;
            }
            sc.nextLine(); 

            switch (choice) {
                case 1:
                    System.out.println("\n---- Rooms & Devices ----");
                    for (String roomName : home.getRoom().keySet()) {
                        Room room = home.getRoom().get(roomName);
                        room.showStatus();
                        System.out.println();           
                    }
                    break;
                    
                case 2:
                    System.out.print("Enter new room name: ");
                    String newRoomName = sc.nextLine();
                    if (newRoomName.isBlank()) {
                        System.out.println("Room name cannot be empty.");
                        break;
                    }
                    Room newRoom = new Room(newRoomName);
                    home.addRoom(newRoom);
                    System.out.println("Room '" + newRoomName + "' added.");
                    break;

                case 3:
                    System.out.print("Enter room name to add device: ");
                    String roomName = sc.nextLine();
                    Room selectedRoom = null;

                    for (String rname : home.getRoom().keySet()) {
                        Room room = home.getRoom().get(rname);
                        if (room.getName().equalsIgnoreCase(roomName)) {
                            selectedRoom = room;
                            break;
                        }
                    }

                    if (selectedRoom == null) {
                        System.out.println("Room not found.");
                        break;
                    }

                    System.out.print("Select device type:\n1. TV\n2. Fridge\n3. AC\n4. Geyser\n5. Light\n6. Custom Device\nYour choice: ");
                    int devType = sc.nextInt();
                    sc.nextLine();

                    System.out.print("Enter device name: ");
                    String deviceName = sc.nextLine();

                    Device device = null;

                    switch (devType) {
					case 1:
						device = new TV(deviceName);
						break;
					case 2:
						device = new Fridge(deviceName);
						break;
					case 3:
						device = new AC(deviceName);
						break;
					case 4:
						device = new Geyser(deviceName);
						break;
					case 5:
						device = new Light(deviceName);
						break;
                        case 6:
                            device = new CustomDevice(deviceName);
                            System.out.println("Custom device created.");
                            break;
                        default:
                            System.out.println("Invalid choice! Creating a Generic Device.");
                            device = new CustomDevice(deviceName);
                    }

                    selectedRoom.addDevice(device);
                    System.out.println("Device '" + deviceName + "' added to room '" + selectedRoom.getName() + "'.");
                    break;

                case 4:
                    operateDevice(home, sc, true);
                    break;

                case 5:
                    operateDevice(home, sc, false);
                    break;

                case 6:
                    System.out.print("Enter room name to show device status: ");
                    String rname = sc.nextLine();
                    Room roomFound = null;
                    for (String roomKey : home.getRoom().keySet()) {
                        Room room = home.getRoom().get(roomKey);
                        if (room.getName().equalsIgnoreCase(rname)) {
                            roomFound = room;
                            break;
                        }
                    }

                    if (roomFound == null) {
                        System.out.println("Room not found.");
                        break;
                    }
                    roomFound.showStatus();
                    break;

                case 7:
                    exit = true;
                    System.out.println("Exiting Home Automation System. Goodbye!");
                    break;

                default:
                    System.out.println("Invalid choice, please try again.");
            }
        }

        sc.close();
    }

    private static void operateDevice(Home home, Scanner sc, boolean turnOn) {
        System.out.print("Enter room name: ");
        String roomName = sc.nextLine();
        Room room = null;
        for (String roomKey : home.getRoom().keySet()) {
            Room candidateRoom = home.getRoom().get(roomKey);
            if (candidateRoom.getName().equalsIgnoreCase(roomName)) {
                room = candidateRoom;
                break;
            }
        }
        if (room == null) {
            System.out.println("Room not found.");
            return;
        }
        
        System.out.print("Enter device name to " + (turnOn ? "turn ON" : "turn OFF") + ": ");
        String deviceName = sc.nextLine();
        Device targetDevice = null;
        for (Device d : room.getDevices()) {
            if (d.getName().equalsIgnoreCase(deviceName)) {
                targetDevice = d;
                break;
            }
        }
        if (targetDevice == null) {
            System.out.println("Device not found in the room.");
            return;
        }
        if (turnOn) {
            targetDevice.turnOn();
            System.out.println("Device '" + targetDevice.getName() + "' is now ON.");
        } else {
            targetDevice.turnOff();
            System.out.println("Device '" + targetDevice.getName() + "' is now OFF.");
        }
    }
}
