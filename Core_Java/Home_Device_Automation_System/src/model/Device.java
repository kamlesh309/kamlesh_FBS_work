package model;

import java.time.Duration;
import java.time.LocalDateTime;

public abstract class Device {
	String name;
	boolean isOn;
	LocalDateTime changeTime;
	private boolean status;
	
	public Device(String name) {		//para const.
		this.name = name;
		this.isOn = false;
		this.changeTime = LocalDateTime.now();
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public boolean isOn() {
		return isOn;
	}

	public void setOn(boolean isOn) {
		this.isOn = isOn;
	}

	public LocalDateTime getChangeTime() {
		return changeTime;
	}

	public void setChangeTime(LocalDateTime changeTime) {
		this.changeTime = changeTime;
	}
	
	public boolean getStatus() {
        return status;
    }

    protected void setStatus(boolean status) {
        this.status = status;
    }
	
	public void turnOn() {
		isOn=true;
		changeTime=LocalDateTime.now();
	}
	
	public void turnOff() {
		isOn=false;
		changeTime=LocalDateTime.now();
	}
	
	public long  getTimeInSec() {
		Duration d = Duration.between(changeTime, LocalDateTime.now());
		return d.getSeconds();
	}
	
    public abstract String getDeviceType();

	@Override
	public String toString() {
		return getDeviceType() + " - " + name +
	               " [" + (isOn ? "ON" : "OFF") +
	               ", from: " + getTimeInSec() + "sec]";
	}  
}
