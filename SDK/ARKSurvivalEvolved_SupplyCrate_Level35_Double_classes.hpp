#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_Level35_Double_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrate_Level35_Double.SupplyCrate_Level35_Double_C
// 0x0009 (0x1049 - 0x1040)
class ASupplyCrate_Level35_Double_C : public ASupplyCrate_Level35_C
{
public:
	class APrimalEmitterSpawnable*                     K2Node_DynamicCast_AsPrimalEmitterSpawnable;              // 0x1040(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1048(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrate_Level35_Double.SupplyCrate_Level35_Double_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SupplyCrate_Level35_Double(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif