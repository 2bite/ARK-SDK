// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MatineeValueInterpolationContainer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MatineeValueInterpolationContainer.MatineeValueInterpolationContainer_C.UserConstructionScript
// ()

void AMatineeValueInterpolationContainer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MatineeValueInterpolationContainer.MatineeValueInterpolationContainer_C.UserConstructionScript");

	AMatineeValueInterpolationContainer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatineeValueInterpolationContainer.MatineeValueInterpolationContainer_C.ExecuteUbergraph_MatineeValueInterpolationContainer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMatineeValueInterpolationContainer_C::ExecuteUbergraph_MatineeValueInterpolationContainer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatineeValueInterpolationContainer.MatineeValueInterpolationContainer_C.ExecuteUbergraph_MatineeValueInterpolationContainer");

	AMatineeValueInterpolationContainer_C_ExecuteUbergraph_MatineeValueInterpolationContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
