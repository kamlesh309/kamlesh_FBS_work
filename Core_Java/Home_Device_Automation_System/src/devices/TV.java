package devices;

import behaviours.AdjustVolume;
import behaviours.ChangeChannel;
import model.Device;

public class TV extends Device implements AdjustVolume, ChangeChannel {
    private int volume;
    private int channel;

    public TV(String name) {
        super(name);
        this.volume = 10;
        this.channel = 1;
    }

    @Override
    public void increaseVolume() {
    		volume++; 
    	}

    @Override
	public void decreaseVolume() {
		volume--;
	}

    @Override
	public void nextChannel() {
		channel++;
	}

    @Override
	public void prevChannel() {
		channel--;
	}

    @Override
	public String getDeviceType() {
		return "TV";
	}

    // Getters
	public int getVolume() {
		return volume;
	}

	public int getChannel() {
		return channel;
	}	
}
