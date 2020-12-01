#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Radiation_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Radiation.Buff_Radiation_C
// 0x0024 (0x08C4 - 0x08A0)
class ABuff_Radiation_C : public APrimalBuff
{
public:
	class UClass*                                      RadiationSicknessBuff;                                    // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DurationToAddToSicknessBuffPerSecond;                     // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08AC(0x0004) MISSED OFFSET
	TArray<class UClass*>                              DinoCharactersToHeal;                                     // 0x08B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              HealthToAddToDinoChars;                                   // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Radiation.Buff_Radiation_C");
		return ptr;
	}


	void BuffTickServer(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Radiation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
