// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BeaverDam_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BeaverDam.BeaverDam_C.UserConstructionScript
// ()

void ABeaverDam_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeaverDam.BeaverDam_C.UserConstructionScript");

	ABeaverDam_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeaverDam.BeaverDam_C.ExecuteUbergraph_BeaverDam
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABeaverDam_C::ExecuteUbergraph_BeaverDam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeaverDam.BeaverDam_C.ExecuteUbergraph_BeaverDam");

	ABeaverDam_C_ExecuteUbergraph_BeaverDam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
