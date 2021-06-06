// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpindlesMinigun_Impacts_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpindlesMinigun_Impacts.SpindlesMinigun_Impacts_C.UserConstructionScript
// ()

void ASpindlesMinigun_Impacts_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpindlesMinigun_Impacts.SpindlesMinigun_Impacts_C.UserConstructionScript");

	ASpindlesMinigun_Impacts_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpindlesMinigun_Impacts.SpindlesMinigun_Impacts_C.ExecuteUbergraph_SpindlesMinigun_Impacts
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpindlesMinigun_Impacts_C::ExecuteUbergraph_SpindlesMinigun_Impacts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpindlesMinigun_Impacts.SpindlesMinigun_Impacts_C.ExecuteUbergraph_SpindlesMinigun_Impacts");

	ASpindlesMinigun_Impacts_C_ExecuteUbergraph_SpindlesMinigun_Impacts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
