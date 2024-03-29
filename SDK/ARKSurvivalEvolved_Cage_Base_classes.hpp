#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Cage_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cage_Base.Cage_Base_C
// 0x0010 (0x0B78 - 0x0B68)
class ACage_Base_C : public APrimalStructureDoor
{
public:
	class UStaticMeshComponent*                        ExtraMesh;                                                // 0x0B68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x0B70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Cage_Base.Cage_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Cage_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
