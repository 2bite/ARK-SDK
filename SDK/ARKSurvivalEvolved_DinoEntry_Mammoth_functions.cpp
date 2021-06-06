// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Mammoth_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Mammoth.DinoEntry_Mammoth_C.ExecuteUbergraph_DinoEntry_Mammoth
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Mammoth_C::ExecuteUbergraph_DinoEntry_Mammoth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Mammoth.DinoEntry_Mammoth_C.ExecuteUbergraph_DinoEntry_Mammoth");

	UDinoEntry_Mammoth_C_ExecuteUbergraph_DinoEntry_Mammoth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
