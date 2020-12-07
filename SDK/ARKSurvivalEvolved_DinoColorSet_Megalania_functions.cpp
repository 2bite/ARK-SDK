// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Megalania_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Megalania.DinoColorSet_Megalania_C.ExecuteUbergraph_DinoColorSet_Megalania
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Megalania_C::ExecuteUbergraph_DinoColorSet_Megalania(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Megalania.DinoColorSet_Megalania_C.ExecuteUbergraph_DinoColorSet_Megalania");

	UDinoColorSet_Megalania_C_ExecuteUbergraph_DinoColorSet_Megalania_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
