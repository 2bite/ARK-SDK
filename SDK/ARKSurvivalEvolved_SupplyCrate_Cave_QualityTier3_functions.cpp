// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_Cave_QualityTier3_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrate_Cave_QualityTier3.SupplyCrate_Cave_QualityTier3_C.UserConstructionScript
// ()

void ASupplyCrate_Cave_QualityTier3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Cave_QualityTier3.SupplyCrate_Cave_QualityTier3_C.UserConstructionScript");

	ASupplyCrate_Cave_QualityTier3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Cave_QualityTier3.SupplyCrate_Cave_QualityTier3_C.ExecuteUbergraph_SupplyCrate_Cave_QualityTier3
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Cave_QualityTier3_C::ExecuteUbergraph_SupplyCrate_Cave_QualityTier3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Cave_QualityTier3.SupplyCrate_Cave_QualityTier3_C.ExecuteUbergraph_SupplyCrate_Cave_QualityTier3");

	ASupplyCrate_Cave_QualityTier3_C_ExecuteUbergraph_SupplyCrate_Cave_QualityTier3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
