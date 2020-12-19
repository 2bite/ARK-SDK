// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_LazarusChowder_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_LazarusChowder.Buff_LazarusChowder_C.UserConstructionScript
// ()

void ABuff_LazarusChowder_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LazarusChowder.Buff_LazarusChowder_C.UserConstructionScript");

	ABuff_LazarusChowder_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_LazarusChowder.Buff_LazarusChowder_C.ExecuteUbergraph_Buff_LazarusChowder
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_LazarusChowder_C::ExecuteUbergraph_Buff_LazarusChowder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_LazarusChowder.Buff_LazarusChowder_C.ExecuteUbergraph_Buff_LazarusChowder");

	ABuff_LazarusChowder_C_ExecuteUbergraph_Buff_LazarusChowder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
