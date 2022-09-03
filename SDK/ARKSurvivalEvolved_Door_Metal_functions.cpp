// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Door_Metal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Door_Metal.Door_Metal_C.UserConstructionScript
// ()

void ADoor_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Metal.Door_Metal_C.UserConstructionScript");

	ADoor_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Door_Metal.Door_Metal_C.ExecuteUbergraph_Door_Metal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADoor_Metal_C::ExecuteUbergraph_Door_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Metal.Door_Metal_C.ExecuteUbergraph_Door_Metal");

	ADoor_Metal_C_ExecuteUbergraph_Door_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
