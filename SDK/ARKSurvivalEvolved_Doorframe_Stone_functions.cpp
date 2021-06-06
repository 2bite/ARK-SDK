// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Doorframe_Stone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Doorframe_Stone.Doorframe_Stone_C.UserConstructionScript
// ()

void ADoorframe_Stone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Doorframe_Stone.Doorframe_Stone_C.UserConstructionScript");

	ADoorframe_Stone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Doorframe_Stone.Doorframe_Stone_C.ExecuteUbergraph_Doorframe_Stone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADoorframe_Stone_C::ExecuteUbergraph_Doorframe_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Doorframe_Stone.Doorframe_Stone_C.ExecuteUbergraph_Doorframe_Stone");

	ADoorframe_Stone_C_ExecuteUbergraph_Doorframe_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
