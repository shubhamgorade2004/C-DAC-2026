public class Sales extends Employee {

		int time;
		
		Sales(String n, String a, int ag, char g, int s, int h, int time) {
			super(n, a, ag, g,s,h);
			this.time=time;
		}

		public int gettime() {
			return time;
		}

		public void settime(int time) {
			this.time = time;
		}

		
}


