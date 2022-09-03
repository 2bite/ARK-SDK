// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Tapejara_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Tapejara.DinoColorSet_Tapejara_C.ExecuteUbergraph_DinoColorSet_Tapejara
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Tapejara_C::ExecuteUbergraph_DinoColorSet_Tapejara(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Tapejara.DinoColorSet_Tapejara_C.ExecuteUbergraph_DinoColorSet_Tapejara");

	UDinoColorSet_Tapejara_C_ExecuteUbergraph_DinoColorSet_Tapejara_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
