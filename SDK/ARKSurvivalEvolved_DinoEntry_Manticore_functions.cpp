// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Manticore_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Manticore.DinoEntry_Manticore_C.ExecuteUbergraph_DinoEntry_Manticore
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Manticore_C::ExecuteUbergraph_DinoEntry_Manticore(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Manticore.DinoEntry_Manticore_C.ExecuteUbergraph_DinoEntry_Manticore");

	UDinoEntry_Manticore_C_ExecuteUbergraph_DinoEntry_Manticore_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
