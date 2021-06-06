#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_Level25_Double_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrate_Level25_Double.SupplyCrate_Level25_Double_C
// 0x0009 (0x1079 - 0x1070)
class ASupplyCrate_Level25_Double_C : public ASupplyCrate_Level25_C
{
public:
	class APrimalEmitterSpawnable*                     K2Node_DynamicCast_AsPrimalEmitterSpawnable;              // 0x1070(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1078(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrate_Level25_Double.SupplyCrate_Level25_Double_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SupplyCrate_Level25_Double(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
