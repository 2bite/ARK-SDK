// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Wyvern_Ice_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Wyvern_Ice.DinoColorSet_Wyvern_Ice_C.ExecuteUbergraph_DinoColorSet_Wyvern_Ice
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Wyvern_Ice_C::ExecuteUbergraph_DinoColorSet_Wyvern_Ice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Wyvern_Ice.DinoColorSet_Wyvern_Ice_C.ExecuteUbergraph_DinoColorSet_Wyvern_Ice");

	UDinoColorSet_Wyvern_Ice_C_ExecuteUbergraph_DinoColorSet_Wyvern_Ice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
