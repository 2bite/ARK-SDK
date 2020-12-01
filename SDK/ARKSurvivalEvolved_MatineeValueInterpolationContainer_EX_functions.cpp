// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MatineeValueInterpolationContainer_EX_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MatineeValueInterpolationContainer_EX.MatineeValueInterpolationContainer_EX_C.UserConstructionScript
// ()

void AMatineeValueInterpolationContainer_EX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatineeValueInterpolationContainer_EX.MatineeValueInterpolationContainer_EX_C.UserConstructionScript");

	AMatineeValueInterpolationContainer_EX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatineeValueInterpolationContainer_EX.MatineeValueInterpolationContainer_EX_C.ExecuteUbergraph_MatineeValueInterpolationContainer_EX
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMatineeValueInterpolationContainer_EX_C::ExecuteUbergraph_MatineeValueInterpolationContainer_EX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatineeValueInterpolationContainer_EX.MatineeValueInterpolationContainer_EX_C.ExecuteUbergraph_MatineeValueInterpolationContainer_EX");

	AMatineeValueInterpolationContainer_EX_C_ExecuteUbergraph_MatineeValueInterpolationContainer_EX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
