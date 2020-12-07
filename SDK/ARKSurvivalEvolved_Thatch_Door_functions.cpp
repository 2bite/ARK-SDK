// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Thatch_Door_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Thatch_Door.Thatch_Door_C.UserConstructionScript
// ()

void AThatch_Door_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Thatch_Door.Thatch_Door_C.UserConstructionScript");

	AThatch_Door_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Thatch_Door.Thatch_Door_C.ExecuteUbergraph_Thatch_Door
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AThatch_Door_C::ExecuteUbergraph_Thatch_Door(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Thatch_Door.Thatch_Door_C.ExecuteUbergraph_Thatch_Door");

	AThatch_Door_C_ExecuteUbergraph_Thatch_Door_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
