// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Door_Stone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Door_Stone.Door_Stone_C.UserConstructionScript
// ()

void ADoor_Stone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Stone.Door_Stone_C.UserConstructionScript");

	ADoor_Stone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Door_Stone.Door_Stone_C.ExecuteUbergraph_Door_Stone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADoor_Stone_C::ExecuteUbergraph_Door_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Door_Stone.Door_Stone_C.ExecuteUbergraph_Door_Stone");

	ADoor_Stone_C_ExecuteUbergraph_Door_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
