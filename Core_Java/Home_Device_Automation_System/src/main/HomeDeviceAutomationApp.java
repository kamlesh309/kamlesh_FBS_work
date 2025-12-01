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
            System.out.println("\n--- Home Automation Menu ---");
            System.out.println("1. List All Rooms & Devices");
            System.out.println("2. Add Room");
            System.out.println("3. Add Device to Room");
            System.out.println("4. Turn ON a Device");
            System.out.println("5. Turn OFF a Device");
            System.out.println("6. Exit");
            System.out.print("Enter choice: ");

            int choice = sc.nextInt();
            sc.nextLine();

            switch (choice) {
			case 1:
				showAllRoomsDevices(home);
				break;
			case 2:
				addRooms(home, sc);
				break;
			case 3:
				addDevicesToRoom(home, sc);
				break;
			case 4:
				operateDevice(home, sc, true);
				break;
			case 5:
				operateDevice(home, sc, false);
				break;
                case 6:
                    exit = true;
                    System.out.println("Goodbye!");
                    break;

                default:
                    System.out.println("Invalid choice!");
            }
        }

        sc.close();
    }

    private static void addRooms(Home home, Scanner sc) {
        System.out.print("How many rooms do you want to add? ");
        int count = sc.nextInt();
        sc.nextLine();

        for (int i=1;i<=count;i++) {
            System.out.print("Enter Room " + i + " Name: ");
            String name = sc.nextLine();

            home.addRoom(new Room(name));
            System.out.println("Room added: " + name);
        }
    }

    private static void addDevicesToRoom(Home home, Scanner sc) {

        System.out.print("Enter room name to add devices: ");
        String roomName = sc.nextLine();

        Room room = findRoom(home, roomName);
        if (room == null) {
        		return;
        }

        System.out.print("How many devices do you want to add? ");
        int devCount = sc.nextInt();
        sc.nextLine();

        for (int i=1;i<=devCount;i++) {

            System.out.println("\nSelect Device Type " + i + ":");
            System.out.println("1. TV");
            System.out.println("2. Fridge");
            System.out.println("3. AC");
            System.out.println("4. Geyser");
            System.out.println("5. Light");
            System.out.println("6. Custom Device");
            System.out.print("Choice: ");
            int type = sc.nextInt();
            sc.nextLine();

            System.out.print("Enter device name: ");
            String dname = sc.nextLine();

            Device device;

            switch (type) {
			case 1:
				device = new TV(dname);
				break;
			case 2:
				device = new Fridge(dname);
				break;
			case 3:
				device = new AC(dname);
				break;
			case 4:
				device = new Geyser(dname);
				break;
			case 5:
				device = new Light(dname);
				break;
			case 6:
				device = new CustomDevice(dname);
				break;
                default:
                    System.out.println("Invalid! Creating custom device.");
                    device = new CustomDevice(dname);
            }

            room.addDevice(device);
            System.out.println("Device added.");
        }
    }

    private static void operateDevice(Home home, Scanner sc, boolean on) {

        System.out.print("Enter room name: ");
        String roomName = sc.nextLine();

        Room room = findRoom(home, roomName);
        if (room == null) return;

        System.out.print("Enter device name: ");
        String deviceName = sc.nextLine();

        for (Device d : room.getDevices()) {
            if (d.getName().equalsIgnoreCase(deviceName)) {
                if (on) {
                    d.turnOn();
                    System.out.println("Device turned ON.");
                } else {
                    d.turnOff();
                    System.out.println("Device turned OFF.");
                }
                return;
            }
        }
        System.out.println("Device not found!");
    }

    private static void showAllRoomsDevices(Home home) {
        System.out.println("\n--- All Rooms & Devices ---");
        for (Room r : home.getRoom().values()) {
            r.showStatus();
            System.out.println();
        }
    }

    private static Room findRoom(Home home, String name) {
        for (Room r : home.getRoom().values()) {
            if (r.getName().equalsIgnoreCase(name)) {
                return r;
            }
        }
        System.out.println("Room not found!");
        return null;
    }
}
