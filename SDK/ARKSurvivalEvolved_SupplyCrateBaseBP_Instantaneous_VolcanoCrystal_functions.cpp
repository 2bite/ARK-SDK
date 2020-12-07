// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateBaseBP_Instantaneous_VolcanoCrystal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateBaseBP_Instantaneous_VolcanoCrystal.SupplyCrateBaseBP_Instantaneous_VolcanoCrystal_C.UserConstructionScript
// ()

void ASupplyCrateBaseBP_Instantaneous_VolcanoCrystal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP_Instantaneous_VolcanoCrystal.SupplyCrateBaseBP_Instantaneous_VolcanoCrystal_C.UserConstructionScript");

	ASupplyCrateBaseBP_Instantaneous_VolcanoCrystal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateBaseBP_Instantaneous_VolcanoCrystal.SupplyCrateBaseBP_Instantaneous_VolcanoCrystal_C.ExecuteUbergraph_SupplyCrateBaseBP_Instantaneous_VolcanoCrystal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateBaseBP_Instantaneous_VolcanoCrystal_C::ExecuteUbergraph_SupplyCrateBaseBP_Instantaneous_VolcanoCrystal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateBaseBP_Instantaneous_VolcanoCrystal.SupplyCrateBaseBP_Instantaneous_VolcanoCrystal_C.ExecuteUbergraph_SupplyCrateBaseBP_Instantaneous_VolcanoCrystal");

	ASupplyCrateBaseBP_Instantaneous_VolcanoCrystal_C_ExecuteUbergraph_SupplyCrateBaseBP_Instantaneous_VolcanoCrystal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
