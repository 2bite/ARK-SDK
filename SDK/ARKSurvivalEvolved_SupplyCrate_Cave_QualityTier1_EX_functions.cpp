// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_Cave_QualityTier1_EX_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrate_Cave_QualityTier1_EX.SupplyCrate_Cave_QualityTier1_EX_C.UserConstructionScript
// ()

void ASupplyCrate_Cave_QualityTier1_EX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Cave_QualityTier1_EX.SupplyCrate_Cave_QualityTier1_EX_C.UserConstructionScript");

	ASupplyCrate_Cave_QualityTier1_EX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Cave_QualityTier1_EX.SupplyCrate_Cave_QualityTier1_EX_C.ExecuteUbergraph_SupplyCrate_Cave_QualityTier1_EX
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Cave_QualityTier1_EX_C::ExecuteUbergraph_SupplyCrate_Cave_QualityTier1_EX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Cave_QualityTier1_EX.SupplyCrate_Cave_QualityTier1_EX_C.ExecuteUbergraph_SupplyCrate_Cave_QualityTier1_EX");

	ASupplyCrate_Cave_QualityTier1_EX_C_ExecuteUbergraph_SupplyCrate_Cave_QualityTier1_EX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
