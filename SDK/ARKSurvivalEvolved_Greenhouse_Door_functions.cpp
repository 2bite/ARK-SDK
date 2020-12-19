// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Greenhouse_Door_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Greenhouse_Door.Greenhouse_Door_C.UserConstructionScript
// ()

void AGreenhouse_Door_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Greenhouse_Door.Greenhouse_Door_C.UserConstructionScript");

	AGreenhouse_Door_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Greenhouse_Door.Greenhouse_Door_C.ExecuteUbergraph_Greenhouse_Door
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGreenhouse_Door_C::ExecuteUbergraph_Greenhouse_Door(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Greenhouse_Door.Greenhouse_Door_C.ExecuteUbergraph_Greenhouse_Door");

	AGreenhouse_Door_C_ExecuteUbergraph_Greenhouse_Door_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
