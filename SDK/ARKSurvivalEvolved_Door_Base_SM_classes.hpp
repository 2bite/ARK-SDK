#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Door_Base_SM_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Door_Base_SM.Door_Base_SM_C
// 0x0008 (0x0B70 - 0x0B68)
class ADoor_Base_SM_C : public APrimalStructureDoor
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0B68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Door_Base_SM.Door_Base_SM_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Door_Base_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
