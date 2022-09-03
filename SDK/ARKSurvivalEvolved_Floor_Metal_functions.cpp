// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Floor_Metal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Floor_Metal.Floor_Metal_C.UserConstructionScript
// ()

void AFloor_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Floor_Metal.Floor_Metal_C.UserConstructionScript");

	AFloor_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Floor_Metal.Floor_Metal_C.ExecuteUbergraph_Floor_Metal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFloor_Metal_C::ExecuteUbergraph_Floor_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Floor_Metal.Floor_Metal_C.ExecuteUbergraph_Floor_Metal");

	AFloor_Metal_C_ExecuteUbergraph_Floor_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
