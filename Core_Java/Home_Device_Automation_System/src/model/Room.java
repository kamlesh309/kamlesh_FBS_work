package model;

import java.util.ArrayList;
import java.util.List;

public class Room {
	private String name;
	private List<Device> devices;
	
	public Room(String name) {
        this.name = name;
        this.devices = new ArrayList<>();
    }

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public List<Device> getDevices() {
		return devices;
	}

	public void setDevices(List<Device> devices) {
		this.devices = devices;
	}
	
	public void addDevice(Device d) {
        devices.add(d);
    }
	
	public Device findDeviceByName(String dname) {
		for(Device d: devices) {
			if(d.getName().equalsIgnoreCase(dname)) {
				return d;
			}
		}
		return null;
	}
	
	public void showStatus() {
		System.out.println("Room: "+name);
		if(devices.isEmpty()==true) {
			System.out.println("Room has no devices");
		}
		else {
			for(Device d:devices) {
				System.out.println("Device: "+d);
			}
		}
	}
}
