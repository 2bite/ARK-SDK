#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjMud_Chalico_Corrupted_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjMud_Chalico_Corrupted.ProjMud_Chalico_Corrupted_C
// 0x000C (0x0670 - 0x0664)
class AProjMud_Chalico_Corrupted_C : public AChalicoProj_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0664(0x0004) MISSED OFFSET
	class UChildActorComponent*                        trail;                                                    // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjMud_Chalico_Corrupted.ProjMud_Chalico_Corrupted_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjMud_Chalico_Corrupted(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
