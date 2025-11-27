package model;

import java.util.Collection;
import java.util.TreeMap;

public class Home {
	private TreeMap<String,Room> room;
	
	public Home() {
		room=new TreeMap<String, Room>();
	}

	public TreeMap<String, Room> getRoom() {
		return room;
	}

	public void setRoom(TreeMap<String, Room> room) {
		this.room = room;
	}
	
	public void addRoom(Room r) {
		room.put(r.getName().toLowerCase(), r);
	}
	
	public Room getRoom(String name) {
        return room.get(name.toLowerCase());
    }

    public Collection<Room> getAllRooms() {		//Get list of all rooms in the home.
        return room.values();
    }
    
    public void showAllStatus() {
        if (room.isEmpty()) {
            		System.out.println("No rooms added.");
            		return;
        		}
        for (String roomName : room.keySet()) {		//keySet() stores values/names of all rooms
            Room r = room.get(roomName);
            r.showStatus();		//search using room name and return it
        }
    }
}
