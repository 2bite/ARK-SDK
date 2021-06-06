// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Floor_Stone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Floor_Stone.Floor_Stone_C.UserConstructionScript
// ()

void AFloor_Stone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Floor_Stone.Floor_Stone_C.UserConstructionScript");

	AFloor_Stone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Floor_Stone.Floor_Stone_C.ExecuteUbergraph_Floor_Stone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFloor_Stone_C::ExecuteUbergraph_Floor_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Floor_Stone.Floor_Stone_C.ExecuteUbergraph_Floor_Stone");

	AFloor_Stone_C_ExecuteUbergraph_Floor_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
