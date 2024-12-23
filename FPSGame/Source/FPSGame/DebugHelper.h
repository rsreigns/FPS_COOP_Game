#pragma once

namespace DEBUG
{
	static void PrintString(const FString& Msg, float Time = 2.f, const FColor& Color = FColor::Red)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, Time, Color, Msg);
		}
	}
}