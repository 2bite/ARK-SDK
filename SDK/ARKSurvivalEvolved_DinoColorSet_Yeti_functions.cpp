// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Yeti_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Yeti.DinoColorSet_Yeti_C.ExecuteUbergraph_DinoColorSet_Yeti
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Yeti_C::ExecuteUbergraph_DinoColorSet_Yeti(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Yeti.DinoColorSet_Yeti_C.ExecuteUbergraph_DinoColorSet_Yeti");

	UDinoColorSet_Yeti_C_ExecuteUbergraph_DinoColorSet_Yeti_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
