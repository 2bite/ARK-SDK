// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Monkey_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Monkey.DinoEntry_Monkey_C.ExecuteUbergraph_DinoEntry_Monkey
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Monkey_C::ExecuteUbergraph_DinoEntry_Monkey(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Monkey.DinoEntry_Monkey_C.ExecuteUbergraph_DinoEntry_Monkey");

	UDinoEntry_Monkey_C_ExecuteUbergraph_DinoEntry_Monkey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
