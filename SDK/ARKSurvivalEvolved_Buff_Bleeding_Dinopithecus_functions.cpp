// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Bleeding_Dinopithecus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Bleeding_Dinopithecus.Buff_Bleeding_Dinopithecus_C.UserConstructionScript
// ()

void ABuff_Bleeding_Dinopithecus_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Bleeding_Dinopithecus.Buff_Bleeding_Dinopithecus_C.UserConstructionScript");

	ABuff_Bleeding_Dinopithecus_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Bleeding_Dinopithecus.Buff_Bleeding_Dinopithecus_C.ExecuteUbergraph_Buff_Bleeding_Dinopithecus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Bleeding_Dinopithecus_C::ExecuteUbergraph_Buff_Bleeding_Dinopithecus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Bleeding_Dinopithecus.Buff_Bleeding_Dinopithecus_C.ExecuteUbergraph_Buff_Bleeding_Dinopithecus");

	ABuff_Bleeding_Dinopithecus_C_ExecuteUbergraph_Buff_Bleeding_Dinopithecus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif