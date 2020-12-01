// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Para_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Para.DinoEntry_Para_C.ExecuteUbergraph_DinoEntry_Para
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Para_C::ExecuteUbergraph_DinoEntry_Para(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Para.DinoEntry_Para_C.ExecuteUbergraph_DinoEntry_Para");

	UDinoEntry_Para_C_ExecuteUbergraph_DinoEntry_Para_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
