// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_IceJumper_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_IceJumper.DinoColorSet_IceJumper_C.ExecuteUbergraph_DinoColorSet_IceJumper
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_IceJumper_C::ExecuteUbergraph_DinoColorSet_IceJumper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_IceJumper.DinoColorSet_IceJumper_C.ExecuteUbergraph_DinoColorSet_IceJumper");

	UDinoColorSet_IceJumper_C_ExecuteUbergraph_DinoColorSet_IceJumper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
