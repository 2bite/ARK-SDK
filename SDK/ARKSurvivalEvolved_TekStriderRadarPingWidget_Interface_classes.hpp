#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekStriderRadarPingWidget_Interface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TekStriderRadarPingWidget_Interface.TekStriderRadarPingWidget_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UTekStriderRadarPingWidget_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TekStriderRadarPingWidget_Interface.TekStriderRadarPingWidget_Interface_C");
		return ptr;
	}


	void GetHudData(struct FVector* PingWorldLocation, float* ProgressBarValue, struct FLinearColor* BaseColor, float* RingScale, float* Visibility);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
