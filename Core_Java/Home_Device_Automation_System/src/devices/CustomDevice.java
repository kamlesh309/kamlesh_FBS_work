package devices;

import model.Device;

public class CustomDevice extends Device {
    public CustomDevice(String name) {
        super(name);
    }

    @Override
    public void turnOn() {
        setStatus(true);
        System.out.println(getName() + " turned ON");
    }

    @Override
    public void turnOff() {
        setStatus(false);
        System.out.println(getName() + " turned OFF");
    }

	@Override
	public String getDeviceType() {
		return "Custom Device";
	}
}
