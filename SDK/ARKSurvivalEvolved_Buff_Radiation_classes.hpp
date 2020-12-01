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
// 0x0024 (0x0954 - 0x0930)
class ABuff_Radiation_C : public APrimalBuff
{
public:
	class UClass*                                      RadiationSicknessBuff;                                    // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DurationToAddToSicknessBuffPerSecond;                     // 0x0938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x093C(0x0004) MISSED OFFSET
	TArray<class UClass*>                              DinoCharactersToHeal;                                     // 0x0940(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              HealthToAddToDinoChars;                                   // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
