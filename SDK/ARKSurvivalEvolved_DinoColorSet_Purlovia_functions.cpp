// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Purlovia_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Purlovia.DinoColorSet_Purlovia_C.ExecuteUbergraph_DinoColorSet_Purlovia
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Purlovia_C::ExecuteUbergraph_DinoColorSet_Purlovia(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Purlovia.DinoColorSet_Purlovia_C.ExecuteUbergraph_DinoColorSet_Purlovia");

	UDinoColorSet_Purlovia_C_ExecuteUbergraph_DinoColorSet_Purlovia_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
