// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_WolfFur_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_WolfFur.DinoColorSet_WolfFur_C.ExecuteUbergraph_DinoColorSet_WolfFur
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_WolfFur_C::ExecuteUbergraph_DinoColorSet_WolfFur(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_WolfFur.DinoColorSet_WolfFur_C.ExecuteUbergraph_DinoColorSet_WolfFur");

	UDinoColorSet_WolfFur_C_ExecuteUbergraph_DinoColorSet_WolfFur_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
