#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionServerSidePoint_Race_StartingLine_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionServerSidePoint_Race_StartingLine.MissionServerSidePoint_Race_StartingLine_C
// 0x0008 (0x04B8 - 0x04B0)
class AMissionServerSidePoint_Race_StartingLine_C : public AMissionServerSidePoint
{
public:
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionServerSidePoint_Race_StartingLine.MissionServerSidePoint_Race_StartingLine_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionServerSidePoint_Race_StartingLine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
