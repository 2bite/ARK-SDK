// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_Cave_QualityTier2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrate_Cave_QualityTier2.SupplyCrate_Cave_QualityTier2_C.UserConstructionScript
// ()

void ASupplyCrate_Cave_QualityTier2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Cave_QualityTier2.SupplyCrate_Cave_QualityTier2_C.UserConstructionScript");

	ASupplyCrate_Cave_QualityTier2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Cave_QualityTier2.SupplyCrate_Cave_QualityTier2_C.ExecuteUbergraph_SupplyCrate_Cave_QualityTier2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Cave_QualityTier2_C::ExecuteUbergraph_SupplyCrate_Cave_QualityTier2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Cave_QualityTier2.SupplyCrate_Cave_QualityTier2_C.ExecuteUbergraph_SupplyCrate_Cave_QualityTier2");

	ASupplyCrate_Cave_QualityTier2_C_ExecuteUbergraph_SupplyCrate_Cave_QualityTier2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
