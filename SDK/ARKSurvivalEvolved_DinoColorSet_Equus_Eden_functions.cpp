// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Equus_Eden_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Equus_Eden.DinoColorSet_Equus_Eden_C.ExecuteUbergraph_DinoColorSet_Equus_Eden
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Equus_Eden_C::ExecuteUbergraph_DinoColorSet_Equus_Eden(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Equus_Eden.DinoColorSet_Equus_Eden_C.ExecuteUbergraph_DinoColorSet_Equus_Eden");

	UDinoColorSet_Equus_Eden_C_ExecuteUbergraph_DinoColorSet_Equus_Eden_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
