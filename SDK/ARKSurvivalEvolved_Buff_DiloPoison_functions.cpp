// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DiloPoison_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DiloPoison.Buff_DiloPoison_C.UserConstructionScript
// ()

void ABuff_DiloPoison_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DiloPoison.Buff_DiloPoison_C.UserConstructionScript");

	ABuff_DiloPoison_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DiloPoison.Buff_DiloPoison_C.ExecuteUbergraph_Buff_DiloPoison
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DiloPoison_C::ExecuteUbergraph_Buff_DiloPoison(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DiloPoison.Buff_DiloPoison_C.ExecuteUbergraph_Buff_DiloPoison");

	ABuff_DiloPoison_C_ExecuteUbergraph_Buff_DiloPoison_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
