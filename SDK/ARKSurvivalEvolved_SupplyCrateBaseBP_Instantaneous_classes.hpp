#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateBaseBP_Instantaneous_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrateBaseBP_Instantaneous.SupplyCrateBaseBP_Instantaneous_C
// 0x0010 (0x0EB8 - 0x0EA8)
class ASupplyCrateBaseBP_Instantaneous_C : public APrimalStructureItemContainer_SupplyCrate
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x0EA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x0EB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrateBaseBP_Instantaneous.SupplyCrateBaseBP_Instantaneous_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SupplyCrateBaseBP_Instantaneous(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
