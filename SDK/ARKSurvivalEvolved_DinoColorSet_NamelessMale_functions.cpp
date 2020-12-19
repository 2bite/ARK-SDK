// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_NamelessMale_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_NamelessMale.DinoColorSet_NamelessMale_C.ExecuteUbergraph_DinoColorSet_NamelessMale
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_NamelessMale_C::ExecuteUbergraph_DinoColorSet_NamelessMale(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_NamelessMale.DinoColorSet_NamelessMale_C.ExecuteUbergraph_DinoColorSet_NamelessMale");

	UDinoColorSet_NamelessMale_C_ExecuteUbergraph_DinoColorSet_NamelessMale_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
