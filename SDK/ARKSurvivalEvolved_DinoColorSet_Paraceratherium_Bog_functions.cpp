// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Paraceratherium_Bog_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Paraceratherium_Bog.DinoColorSet_Paraceratherium_Bog_C.ExecuteUbergraph_DinoColorSet_Paraceratherium_Bog
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Paraceratherium_Bog_C::ExecuteUbergraph_DinoColorSet_Paraceratherium_Bog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Paraceratherium_Bog.DinoColorSet_Paraceratherium_Bog_C.ExecuteUbergraph_DinoColorSet_Paraceratherium_Bog");

	UDinoColorSet_Paraceratherium_Bog_C_ExecuteUbergraph_DinoColorSet_Paraceratherium_Bog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
