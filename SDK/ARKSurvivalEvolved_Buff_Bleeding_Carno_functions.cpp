// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Bleeding_Carno_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Bleeding_Carno.Buff_Bleeding_Carno_C.UserConstructionScript
// ()

void ABuff_Bleeding_Carno_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Bleeding_Carno.Buff_Bleeding_Carno_C.UserConstructionScript");

	ABuff_Bleeding_Carno_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Bleeding_Carno.Buff_Bleeding_Carno_C.ExecuteUbergraph_Buff_Bleeding_Carno
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Bleeding_Carno_C::ExecuteUbergraph_Buff_Bleeding_Carno(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Bleeding_Carno.Buff_Bleeding_Carno_C.ExecuteUbergraph_Buff_Bleeding_Carno");

	ABuff_Bleeding_Carno_C_ExecuteUbergraph_Buff_Bleeding_Carno_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
