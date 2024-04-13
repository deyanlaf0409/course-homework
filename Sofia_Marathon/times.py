import datetime

class Time:
    """
    docstring
    """
    def __init__(self, hours, minutes, seconds):
        self._hours = hours
        self._minutes = minutes
        self._seconds = seconds

    def __str__(self):
        """
         docstring
         """
        return "{:02d}:{:02d}:{:02d}".format(self.hours, self.minutes, self.seconds)

    def convert_to_seconds(self, hours, minutes, seconds):
        return (hours * 60 * 60) + (minutes * 60) + (seconds)

    def convert_to_hours(self, seconds):
        seconds = seconds % (24 * 3600)
        hour = seconds // 3600
        seconds %= 3600
        minutes = seconds // 60
        seconds %= 60
        return hour, minutes, seconds

    def time_diff(self):  # missing docstrings
        """ Method that returns difference in current time and the time given """
        currentDT = datetime.datetime.now()
        given_time_in_seconds = self.convert_to_seconds(self.hours, self.minutes, self.seconds)
        current_time_seconds = self.convert_to_seconds(currentDT.hour, currentDT.minute,
                                                       currentDT.second)

        if self.hours >= currentDT.hour:
            hours, minutes, seconds = \
                self.convert_to_hours(given_time_in_seconds - current_time_seconds)
        else:
            hours, minutes, seconds = \
                self.convert_to_hours(current_time_seconds - given_time_in_seconds )

        return Time(hours, minutes, seconds)

    @property
    def hours(self):
        return self._hours

    @hours.setter
    def hours(self, value):
        self._hours = value

    @property
    def minutes(self):
        return self._minutes

    @minutes.setter
    def minutes(self, value):
        self._minutes = value

    @property
    def seconds(self):
        return self._seconds

    @seconds.setter
    def seconds(self, value):
        self._seconds = value

