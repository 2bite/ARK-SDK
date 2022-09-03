#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjAmargaSpike_Hot_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjAmargaSpike_Hot.ProjAmargaSpike_Hot_C
// 0x0008 (0x07B8 - 0x07B0)
class AProjAmargaSpike_Hot_C : public AProjAmargaSpike_C
{
public:
	class UChildActorComponent*                        ChildTrailEmitter;                                        // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjAmargaSpike_Hot.ProjAmargaSpike_Hot_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjAmargaSpike_Hot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
