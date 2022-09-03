// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Bigfoot_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Bigfoot.DinoColorSet_Bigfoot_C.ExecuteUbergraph_DinoColorSet_Bigfoot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Bigfoot_C::ExecuteUbergraph_DinoColorSet_Bigfoot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Bigfoot.DinoColorSet_Bigfoot_C.ExecuteUbergraph_DinoColorSet_Bigfoot");

	UDinoColorSet_Bigfoot_C_ExecuteUbergraph_DinoColorSet_Bigfoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
